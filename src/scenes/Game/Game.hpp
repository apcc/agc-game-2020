#pragma once

#include <Siv3D.hpp>
#include <common.hpp>

enum class GameScene {
  SelectAction,
  PlaceObstacle,
  Run,
};

class Game : public App::Scene {
  GameScene currentScene;

public:
  Game(const InitData& init);

  void update() override;

  void draw() const override;

  // SelectAction
  Optional<GameScene> selectActionUpdate();
  void selectActionDraw() const;

  // PlaceObstacle
  Optional<GameScene> placeObstacleUpdate();
  void placeObstacleDraw() const;

  // Run
  Optional<GameScene> runUpdate();
  void runDraw() const;
};
