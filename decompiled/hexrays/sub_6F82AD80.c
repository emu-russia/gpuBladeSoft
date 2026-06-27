char __cdecl sub_6F82AD80(int a1, int a2)
{
  int v2; // ebx@1
  char v3; // dl@2
  char v4; // al@2
  int v5; // ebp@2
  int v6; // ecx@2
  char v7; // dl@3
  char v8; // al@3
  int v9; // ebp@3
  int v10; // ecx@3
  char v11; // dl@3
  char v12; // cl@3
  char v13; // cl@3
  char v14; // al@3
  char v15; // dl@3
  char v16; // dl@3
  char v17; // cl@3
  char result; // al@3
  int v19; // [sp+20h] [bp-2Ch]@3
  int v20; // [sp+24h] [bp-28h]@3
  int v21; // [sp+28h] [bp-24h]@3
  int v22; // [sp+2Ch] [bp-20h]@3

  v2 = *(_DWORD *)(a1 + 51572) + 96 * a2;
  if ( *(_BYTE *)(a1 + 51614) )
  {
    v6 = *(_BYTE *)(v2 + 37);
    v5 = *(_BYTE *)(v2 + 38);
    v3 = *(_BYTE *)(v2 + 37);
    v4 = *(_BYTE *)(v2 + 38);
  }
  else
  {
    v3 = *(_BYTE *)(v2 + 37);
    v4 = *(_BYTE *)(v2 + 38);
    v5 = 0;
    v6 = 0;
  }
  v7 = v3 - *(_BYTE *)(v2 + 45);
  v8 = v4 - *(_BYTE *)(v2 + 46);
  v20 = v5;
  v19 = v6;
  v9 = *(_BYTE *)(v2 + 44);
  v10 = *(_BYTE *)(v2 + 43);
  *(_BYTE *)(v2 + 37) = v7;
  *(_BYTE *)(v2 + 38) = v8;
  v21 = v10;
  v22 = v9;
  memmove((void *)(v2 + 39), (const void *)(v2 + 35), 8u);
  sub_6F829C20(a1, (int)&v19, a2, 1);
  v11 = v19;
  v12 = *(_BYTE *)(v2 + 43);
  *(_BYTE *)(v2 + 39) -= v12;
  v13 = v12 - v21;
  v14 = v20;
  *(_BYTE *)(v2 + 45) = v11;
  v15 = *(_BYTE *)(v2 + 44);
  *(_BYTE *)(v2 + 40) -= v15;
  v16 = v15 - v22;
  *(_BYTE *)(v2 + 46) = v14;
  *(_BYTE *)(v2 + 43) = v13;
  *(_BYTE *)(v2 + 44) = v16;
  sub_6F828EC0(a1, (int)&v21, a2);
  v17 = v21 + *(_BYTE *)(v2 + 43);
  result = v22 + *(_BYTE *)(v2 + 44);
  *(_BYTE *)(v2 + 39) += v17;
  *(_BYTE *)(v2 + 40) += result;
  *(_BYTE *)(v2 + 43) = v17;
  *(_BYTE *)(v2 + 44) = result;
  return result;
}
