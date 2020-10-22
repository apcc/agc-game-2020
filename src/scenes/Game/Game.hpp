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
  // コンストラクタ（必ず実装）
  Game(const InitData& init);

  // 更新関数
  void update() override;

  // 描画関数 (const 修飾)
  void draw() const override;

  // SelectAction
  Optional<GameScene> selectActionUpdate();
  void selectActionDraw() const;

  // SelectAction
  Optional<GameScene> placeObstacleUpdate();
  void placeObstacleDraw() const;

  // SelectAction
  Optional<GameScene> runUpdate();
  void runDraw() const;
};
