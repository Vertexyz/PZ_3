// Fill out your copyright notice in the Description page of Project Settings.

#include "UnitMovableActorComponent.h"


// Sets default values for this component's properties
UUnitMovableActorComponent::UUnitMovableActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUnitMovableActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UUnitMovableActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* ParrentActor = GetOwner();
	if (ParrentActor)
	{
		ParrentActor->SetActorLocation(ParrentActor->GetActorLocation() + FVector(0.0f, Speed, 0.0f));
		ParrentActor->SetActorRotation(ParrentActor->GetActorRotation() + FRotator(0.0f, Speed, 0.0f));
	}
	// ...
}

