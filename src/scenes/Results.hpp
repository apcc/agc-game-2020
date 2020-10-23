#pragma once

#include <Siv3D.hpp>
#include <common.hpp>

class Results : public App::Scene {
public:
  Results(const InitData& init);

  void update() override;

  void draw() const override;
};
