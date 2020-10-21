#pragma once

#include <Siv3D.hpp>
#include <common.hpp>

class Title : public App::Scene {
public:

  // コンストラクタ（必ず実装）
  Title(const InitData& init)
    : IScene(init) {

  }

  // 更新関数
  void update() override {
    // 左クリックで
    if (MouseL.down()) {
      // ゲームシーンに遷移
      changeScene(U"Description");
    }
  }

  // 描画関数 (const 修飾)
  void draw() const override {
    Scene::SetBackground(ColorF(0.3, 0.4, 0.5));

    FontAsset(U"TitleFont")(U"Title").drawAt(400, 100);

    Circle(Cursor::Pos(), 50).draw(Palette::Orange);
  }
};
