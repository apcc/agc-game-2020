#include <Siv3D.hpp> // OpenSiv3D v0.4.3
#include <common.hpp>
#include <scenes/Title.hpp>
#include <scenes/Description.hpp>
#include <scenes/Game/Game.hpp>
#include <scenes/Results.hpp>

void Main()
{
	FontAsset::Register(U"TitleFont", 60, Typeface::Heavy);

	App manager;

	manager.add<Title>(U"Title");
	manager.add<Description>(U"Description");
	manager.add<Game>(U"Game");
	manager.add<Results>(U"Results");

	while(System::Update())
	{
		if (!manager.update()) break;
	}
}
