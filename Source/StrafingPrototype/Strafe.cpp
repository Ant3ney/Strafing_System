// Fill out your copyright notice in the Description page of Project Settings.


#include "Strafe.h"

UStrafe* UStrafe::AIStrafe()
{
	UStrafe* strafeNode = NewObject<UStrafe>();
	return strafeNode;


}

TArray<FVector> UStrafe::GetPerpendicularPoints(const FVector& PointA, const FVector& PointB, float spacing) {
    TArray<FVector> points;

    // Calculate the direction vector from A to B
    FVector direction = PointB - PointA;

    // Find a perpendicular vector in the XY plane (assuming Z is up)
    FVector perpendicular(direction.Y, -direction.X, 0.0f);

    // Normalize the perpendicular vector
    perpendicular.Normalize();

    // Generate 5 points on each side of Point A
    for (int i = -5; i <= 5; ++i) {
        if (i == 0) continue; // Skip the center point (Point A)
        // Calculate the new point
        FVector newPoint = PointA + perpendicular * spacing * i;
        points.Add(newPoint);
    }

    return points;
}

void UStrafe::Orwlo_testing() {

}