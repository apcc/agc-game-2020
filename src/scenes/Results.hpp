#pragma once

#include <Siv3D.hpp>
#include <common.hpp>

class Results : public App::Scene {
public:
  // コンストラクタ（必ず実装）
  Results(const InitData& init);

  // 更新関数
  void update() override;

  // 描画関数 (const 修飾)
  void draw() const override;
};
