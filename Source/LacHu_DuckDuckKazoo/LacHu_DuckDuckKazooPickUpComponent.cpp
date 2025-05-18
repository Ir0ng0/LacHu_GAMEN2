// Copyright Epic Games, Inc. All Rights Reserved.

#include "LacHu_DuckDuckKazooPickUpComponent.h"

ULacHu_DuckDuckKazooPickUpComponent::ULacHu_DuckDuckKazooPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void ULacHu_DuckDuckKazooPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &ULacHu_DuckDuckKazooPickUpComponent::OnSphereBeginOverlap);
}

void ULacHu_DuckDuckKazooPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ALacHu_DuckDuckKazooCharacter* Character = Cast<ALacHu_DuckDuckKazooCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
