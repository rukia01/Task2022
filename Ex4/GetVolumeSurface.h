#pragma once
/// <summary>
/// 立方体の体積と表面積を算出する
/// </summary>
/// <param name="x">幅</param>
/// <param name="y">高さ</param>
/// <param name="z">奥行</param>
/// <param name="surface">面積</param>
/// <returns>体積</returns>
double GetVolumeSurface(double x, double y, double z, double *surface);
