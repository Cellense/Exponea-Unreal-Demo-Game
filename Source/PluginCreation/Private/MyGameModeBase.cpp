// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "Infinario.h"

void AMyGameModeBase::BeginPlay( )
{
	Super::BeginPlay( );

	if( bBypassCPPCode == false )
	{
		/** Get SDK instance */
		Inf = UInfinario::GetInstance( this );

		if( Inf == nullptr )
		{
			return;
		}

		/** Initialize with a given token amd custom target API */
		Inf->Initialize( Token, TEXT( "api.infinario.com" ) );

		/** Initialize with a given token */
		//Inf->Identify( FString( TEXT( "C++ Player" ) ) );

		/** Create data attached to every call. This part is optional.*/
		TMap< FString, FInfinarioData > EveryCallData;
		EveryCallData.Add( "every_call_data_int", FInfinarioData( 1 ) );
		Inf->CreateEveryCallPayload( EveryCallData );

		/** Create sample payload */
		TMap< FString, FInfinarioData > TestData;
		TestData.Add( "Integer Key", FInfinarioData( 3 ) );
		TestData.Add( "String Key", FInfinarioData( FString( TEXT( "Alex - String" ) ) ) );
		TestData.Add( "Float Key", FInfinarioData( 1.2f ) );
		TestData.Add( "Bool Key", FInfinarioData( true ) );

		Inf->Track( "my_event", TestData );
		Inf->TrackSessionStart( TestData );
		Inf->TrackSessionEnd( TestData );

		/**
		 * Track with default virtual payment data structure.
		 * Note: Use standard Track scenario in case you need to track additional data to the currency payload.
		 */
		FVirtualPayment VirtualPaymentData = FVirtualPayment( FInfinarioData( TEXT( "Gold" ) ), FInfinarioData( 10.0f ), FInfinarioData( TEXT( "Axe" ) ), FInfinarioData( TEXT( "Weapon" ) ) );

		Inf->TrackVirtualPayment( VirtualPaymentData );
	}
}
