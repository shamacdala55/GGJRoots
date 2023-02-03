// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "GGJRootsCharacter.generated.h"


UCLASS(config=Game)
class AGGJRootsCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;



public:
	AGGJRootsCharacter();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScoreBoard")
		int32 FinalPoints;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScoreBoard")
		int32 FinalDeath;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScoreBoard")
		float FinalTime;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ScoreBoard")
		int32 FinalScore;
protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }


	UFUNCTION(BlueprintCallable)
	void StartCrouching();
	UFUNCTION(BlueprintCallable)
	void StopCrouching();

	UFUNCTION(BlueprintCallable)
	void LookUp(float Val);
	UFUNCTION(BlueprintCallable)
	void Turn(float Val);


<<<<<<< HEAD
	
=======
	UFUNCTION(BlueprintCallable)
>>>>>>> 709e8ae87d43666e3c7ab692ddc8e0041dfc58d6
	void MoveForward(float Val);
	UFUNCTION(BlueprintCallable)
	void MoveRight(float Val);

public:


	// Called to bind functionality to input
	

};

