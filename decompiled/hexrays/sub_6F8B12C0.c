double __cdecl sub_6F8B12C0(int a1, int a2)
{
  int v2; // eax@1
  double result; // st7@2
  double v4; // [sp+10h] [bp-3Ch]@1
  double v5; // [sp+18h] [bp-34h]@1
  double v6; // [sp+20h] [bp-2Ch]@1
  double v7; // [sp+28h] [bp-24h]@1
  int v8; // [sp+38h] [bp-14h]@1
  int v9; // [sp+3Ch] [bp-10h]@1

  v4 = sub_6F8B0FB0(a1, &v8);
  v6 = v4;
  v5 = sub_6F8B0FB0(a2, &v9);
  v7 = v5;
  v2 = v8 + 32 * (*(_DWORD *)(a1 + 16) - *(_DWORD *)(a2 + 16)) - v9;
  if ( v2 <= 0 )
  {
    HIDWORD(v7) = HIDWORD(v5) - (v2 << 20);
    result = v4 / v7;
  }
  else
  {
    HIDWORD(v6) = HIDWORD(v4) + (v2 << 20);
    result = v6 / v5;
  }
  return result;
}
