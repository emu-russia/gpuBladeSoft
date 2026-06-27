int __cdecl sub_6F849230(int a1, int a2, int a3)
{
  signed int v3; // eax@5
  int result; // eax@7
  signed int v5; // eax@15
  __int16 v6; // ST16_2@18
  int v7; // [sp+18h] [bp-20h]@17
  int v8; // [sp+1Ch] [bp-1Ch]@13
  int v9; // [sp+20h] [bp-18h]@13
  int v10; // [sp+24h] [bp-14h]@7
  int v11; // [sp+28h] [bp-10h]@3
  int v12; // [sp+2Ch] [bp-Ch]@1
  _BYTE *v13; // [sp+44h] [bp+Ch]@7
  int v14; // [sp+44h] [bp+Ch]@17

  v12 = *(_DWORD *)a1;
  if ( !(*(_BYTE *)(a1 + 8) & 4) )
    return sub_6F839262(a3, "png_do_encode_alpha: unexpected call");
  if ( *(_BYTE *)(a1 + 9) == 8 )
  {
    v11 = *(_DWORD *)(a3 + 408);
    if ( v11 )
    {
      if ( *(_BYTE *)(a1 + 8) & 2 )
        v3 = 4;
      else
        v3 = 2;
      v10 = v3;
      result = v3 - 1;
      v13 = (_BYTE *)(result + a2);
      while ( v12 )
      {
        *v13 = *(_BYTE *)(*v13 + v11);
        --v12;
        result = v10;
        v13 += v10;
      }
      return result;
    }
    return sub_6F839262(a3, "png_do_encode_alpha: unexpected call");
  }
  if ( *(_BYTE *)(a1 + 9) != 16 )
    return sub_6F839262(a3, "png_do_encode_alpha: unexpected call");
  v9 = *(_DWORD *)(a3 + 416);
  v8 = *(_DWORD *)(a3 + 392);
  if ( !v9 )
    return sub_6F839262(a3, "png_do_encode_alpha: unexpected call");
  if ( *(_BYTE *)(a1 + 8) & 2 )
    v5 = 8;
  else
    v5 = 4;
  v7 = v5;
  result = v5 - 2;
  v14 = result + a2;
  while ( v12 )
  {
    v6 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)*(_BYTE *)(v14 + 1) >> v8) + v9) + 2 * *(_BYTE *)v14);
    *(_BYTE *)v14 = HIBYTE(v6);
    *(_BYTE *)(v14 + 1) = v6;
    --v12;
    result = v7;
    v14 += v7;
  }
  return result;
}
