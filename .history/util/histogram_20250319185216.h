// Copyright (c) 2011 The LevelDB Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#ifndef STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
#define STORAGE_LEVELDB_UTIL_HISTOGRAM_H_

#include <string>

namespace leveldb {

// 直方图类
class Histogram {
 public:
  Histogram() {}
  ~Histogram() {}

  void Clear();
  void Add(double value);
  void Merge(const Histogram& other);

  std::string ToString() const;

 private:
  enum { kNumBuckets = 154 };  // 直方图的桶数（固定 154 个）

  double Median() const;
  double Percentile(double p) const;
  double Average() const;
  double StandardDeviation() const;

  static const double kBucketLimit[kNumBuckets];  // 每个桶的边界值

  double min_;          // 最小值
  double max_;          // 最大值
  double num_;          // 总样本数
  double sum_;          // 所有样本的总和
  double sum_squares_;  // 用于计算标准差的平方和

  double buckets_[kNumBuckets];  // 154 个桶，每个桶存储落入的值的个数
};

}  // namespace leveldb

#endif  // STORAGE_LEVELDB_UTIL_HISTOGRAM_H_
