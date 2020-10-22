#include "Game.hpp"

Optional<GameScene> Game::runUpdate() {
  if (MouseL.down()) {
    // ゲームシーンに遷移
    return GameScene::SelectAction;
  }
  return none;
}

void Game::runDraw() const {
  Scene::SetBackground(ColorF(0.5, 0.4, 0.3));

  FontAsset(U"TitleFont")(U"Run").drawAt(400, 100);

  Circle(Cursor::Pos(), 50).draw(Palette::Red);
}
