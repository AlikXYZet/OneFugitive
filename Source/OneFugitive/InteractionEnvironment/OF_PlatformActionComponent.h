// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

// My:
#include "OF_BasicPlatform.h"

// Generated:
#include "OF_PlatformActionComponent.generated.h"



UCLASS(ClassGroup = (Custom), BlueprintType, Blueprintable, EditInlineNew, meta = (BlueprintSpawnableComponent))
class ONEFUGITIVE_API UOF_PlatformActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOF_PlatformActionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// ----------------------------------------------------------------------------------------------------



	/* ---   Event   --- */
	//
	UFUNCTION(BlueprintNativeEvent)
		void PlatformBeginOverlap(AOneFugitiveCharacter* MyCharacter);

	UFUNCTION(BlueprintNativeEvent)
		void PlatformEndOverlap(AOneFugitiveCharacter* MyCharacter);

	UFUNCTION(BlueprintNativeEvent)
		void PlatformHit(AOneFugitiveCharacter* MyCharacter);
	// ----------------------------------------------------------------------------------------------------



	AOF_BasicPlatform* ThisPlatform = Cast<AOF_BasicPlatform>(GetOwner());
};