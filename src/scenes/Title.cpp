#include "Title.hpp"

Title::Title(const InitData& init) : IScene(init) {}

void Title::update() {
  if (MouseL.down()) {
    changeScene(U"Game");
  }
}

void Title::draw() const {
  Scene::SetBackground(ColorF(0.3, 0.4, 0.5));

  FontAsset(U"TitleFont")(U"Title").drawAt(400, 100);

  Circle(Cursor::Pos(), 50).draw(Palette::Orange);
}
