#include "Game.hpp"

Optional<GameScene> Game::placeObstacleUpdate() {
  if (MouseL.down()) {
    return GameScene::Run;
  }
  return none;
}

void Game::placeObstacleDraw() const {
  Scene::SetBackground(ColorF(0.6, 0.2, 0.4));

  FontAsset(U"TitleFont")(U"Place").drawAt(400, 100);

  Circle(Cursor::Pos(), 50).draw(Palette::Blue);
}
