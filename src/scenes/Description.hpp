#pragma once

#include <Siv3D.hpp>
#include <common.hpp>

class Description : public App::Scene {
public:
  Description(const InitData& init);

  void update() override;

  void draw() const override;
};
