// Naify

#pragma once

#include "CoreMinimal.h"
#include "GAS/HeroAbilitySystemComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types/EnumTypes.h"
#include "FunctionLibrary.generated.h"

class UCombatComponent;
/**
 * 
 */
UCLASS()
class GASBOSS_API UFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    static UCombatComponent* NativeGetCombatComponentFromActor(AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "FunctionLibrary", meta = (DisplayName = "Get Pawn Combat Component From Actor", ExpandEnumAsExecs = "OutValidType"))
    static UCombatComponent* BP_GetPawnCombatComponentFromActor(AActor* Actor, EValidType& OutValidType);
    
    static UHeroAbilitySystemComponent *NativeGetHeroASCFromActor(AActor *InActor);

    UFUNCTION(BlueprintCallable, Category = "FunctionLibrary")
    static void AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd);
};