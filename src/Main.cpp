#include "common.h"
#include "Title.h"
#include "Description.h"
#include "SelectAction.h"
#include "Run.h"
#include "PlaceObstacle.h"
#include "Results.h"

void Main() {
	Window::Resize(SCREEN_WIDTH, SCREEN_HEIGHT);
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy);

	// シーンマネージャーを作成
	SceneManager<String> manager;
	manager.add<Title>(U"Title");
	manager.add<Description>(U"Description");
	manager.add<SelectAction>(U"SelectAction");
	manager.add<Run>(U"Run");
	manager.add<PlaceObstacle>(U"PlaceObstacle");
	manager.add<Results>(U"Results");

	while (System::Update()) {
		if (!manager.update()) break;
	}
}
