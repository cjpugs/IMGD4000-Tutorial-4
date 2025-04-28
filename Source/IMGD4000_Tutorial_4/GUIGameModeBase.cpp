// Fill out your copyright notice in the Description page of Project Settings.


#include "GUIGameModeBase.h"
#include "Blueprint/UserWidget.h"

void AGUIGameModeBase::BeginPlay() {
    Super::BeginPlay();

    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
    //Add our widget to the game display
    CurrentWidget->AddToViewport();
}