#include "Game.hpp"

Game::Game(const InitData& init) : IScene(init) {}

void Game::update() {
  // 左クリックで
  if (MouseL.down()) {
    // ゲームシーンに遷移
    changeScene(U"Results");
  }
}

void Game::draw() const {
  Scene::SetBackground(ColorF(0.3, 0.4, 0.5));

  FontAsset(U"TitleFont")(U"Game").drawAt(400, 100);

  Circle(Cursor::Pos(), 50).draw(Palette::Orange);
}
