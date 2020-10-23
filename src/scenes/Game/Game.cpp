#include "Game.hpp"

Game::Game(const InitData& init) : IScene(init) {
  currentScene = GameScene::SelectAction;
}

void Game::update() {
  const auto setScene = [&](GameScene newValue) { currentScene = newValue; };

  switch (currentScene) {
    case GameScene::SelectAction: selectActionUpdate().then(setScene); break;
    case GameScene::PlaceObstacle: placeObstacleUpdate().then(setScene); break;
    case GameScene::Run: runUpdate().then(setScene); break;
  }
}

void Game::draw() const {
  switch (currentScene) {
    case GameScene::SelectAction: selectActionDraw(); break;
    case GameScene::PlaceObstacle: placeObstacleDraw(); break;
    case GameScene::Run: runDraw(); break;
  }
}
