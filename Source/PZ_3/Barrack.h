// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Unit.h"
#include "Barrack.generated.h"

UCLASS()
class PZ_3_API ABarrack : public AActor
{
GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarrack();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
	USceneComponent* SpawnPoint;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void SpawnUnit();

	UFUNCTION()
	void StartTimer();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
