#include "Game.hpp"

Optional<GameScene> Game::selectActionUpdate() {
  if (MouseL.down()) {
    return GameScene::PlaceObstacle;
  }
  return none;
}

void Game::selectActionDraw() const {
  Scene::SetBackground(ColorF(0.3, 0.4, 0.5));

  FontAsset(U"TitleFont")(U"Select").drawAt(400, 100);

  Circle(Cursor::Pos(), 50).draw(Palette::Orange);
}
