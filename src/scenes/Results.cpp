#include "Results.hpp"

Results::Results(const InitData& init) : IScene(init) {}

void Results::update() {
  // 左クリックで
  if (MouseL.down()) {
    // ゲームシーンに遷移
    changeScene(U"Title");
  }
}

void Results::draw() const {
  Scene::SetBackground(ColorF(0.3, 0.4, 0.5));

  FontAsset(U"TitleFont")(U"Results").drawAt(400, 100);

  Circle(Cursor::Pos(), 50).draw(Palette::Orange);
}
