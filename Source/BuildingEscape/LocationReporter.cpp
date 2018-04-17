// Fill out your copyright notice in the Description page of Project Settings.

#include "LocationReporter.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"

// Sets default values for this component's properties
ULocationReporter::ULocationReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULocationReporter::BeginPlay()
{
	Super::BeginPlay();

	// ...
	FString owner = GetOwner()->GetName();
	FString location = GetOwner()->GetTransform().GetLocation().ToString();
	UE_LOG(LogTemp, Display, TEXT("The position of %s is: %s"), *owner, *location);
}


// Called every frame
void ULocationReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

