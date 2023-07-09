//
// Created by 김영준 on 2023/07/09.
//

#ifndef BAEKJOON_INCLUDE__27323_H_
#define BAEKJOON_INCLUDE__27323_H_

namespace _27323 {
class Rectangle {
 public:
  Rectangle(int width, int height) : width_(width), height_(height){}
  int GetSize() const;
 private:
  int width_;
  int height_;
};
}


#endif //BAEKJOON_INCLUDE__27323_H_
