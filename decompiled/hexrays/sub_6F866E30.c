int __cdecl sub_6F866E30(int a1, int a2, int a3, int a4)
{
  int v4; // edx@1
  int result; // eax@1
  int v6; // edx@4
  char v7; // cl@5
  char v8; // bl@5
  int v9; // [sp+0h] [bp-24h]@4
  int v10; // [sp+4h] [bp-20h]@2
  int v11; // [sp+8h] [bp-1Ch]@1
  int v12; // [sp+Ch] [bp-18h]@1
  int v13; // [sp+10h] [bp-14h]@1
  int v14; // [sp+14h] [bp-10h]@1

  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 440) + 24);
  v13 = *(_DWORD *)v4;
  v12 = *(_DWORD *)(v4 + 4);
  v11 = *(_DWORD *)(v4 + 8);
  result = *(_DWORD *)(a1 + 92);
  v14 = *(_DWORD *)(a1 + 92);
  if ( a4 > 0 )
  {
    v10 = 0;
    do
    {
      result = *(_DWORD *)(a2 + 4 * v10);
      if ( v14 )
      {
        v6 = 0;
        v9 = *(_DWORD *)(a3 + 4 * v10);
        do
        {
          v7 = *(_BYTE *)(v13 + *(_BYTE *)result);
          v8 = *(_BYTE *)(v12 + *(_BYTE *)(result + 1)) + *(_BYTE *)(v11 + *(_BYTE *)(result + 2));
          result += 3;
          *(_BYTE *)(v9 + v6++) = v7 + v8;
        }
        while ( v14 != v6 );
      }
      ++v10;
    }
    while ( v10 != a4 );
  }
  return result;
}
