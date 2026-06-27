int __cdecl sub_6F7C9D30(int a1, int a2, int a3)
{
  int result; // eax@1
  signed int v4; // edi@3
  unsigned int v5; // esi@3
  unsigned int v6; // ebx@6
  unsigned int v7; // eax@8
  unsigned int v8; // ebx@15
  unsigned int v9; // esi@18
  unsigned int v10; // eax@20
  int v11; // [sp+0h] [bp-34h]@15
  unsigned int v12; // [sp+4h] [bp-30h]@5
  int v13; // [sp+8h] [bp-2Ch]@21
  int v14; // [sp+Ch] [bp-28h]@9
  bool v15; // [sp+11h] [bp-23h]@3
  bool v16; // [sp+12h] [bp-22h]@3
  signed int v17; // [sp+14h] [bp-20h]@3
  unsigned int v18; // [sp+14h] [bp-20h]@17
  signed int v19; // [sp+18h] [bp-1Ch]@6
  signed int v20; // [sp+1Ch] [bp-18h]@9
  signed int v21; // [sp+20h] [bp-14h]@12

  result = a1;
  if ( a1 && a2 )
  {
    v17 = *(_DWORD *)a2;
    v4 = a3 << 16;
    v5 = *(_DWORD *)a1;
    v15 = *(_DWORD *)a1 == 0;
    v16 = a3 << 16 == *(_DWORD *)a2;
    if ( v15 || a3 << 16 == *(_DWORD *)a2 )
      v12 = *(_DWORD *)a1;
    else
      v12 = sub_6F7C9220(v5, *(_DWORD *)a2, a3 << 16);
    v19 = *(_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(a1 + 4);
    if ( !v6 || v4 == v19 )
      v7 = *(_DWORD *)(a1 + 4);
    else
      v7 = sub_6F7C9220(v6, v19, v4);
    v14 = v12 + v7;
    v20 = *(_DWORD *)(a2 + 4);
    if ( !v15 && v4 != v20 )
      v5 = sub_6F7C9220(v5, *(_DWORD *)(a2 + 4), v4);
    v21 = *(_DWORD *)(a2 + 12);
    if ( v6 != 0 && v4 != v21 )
      v6 = sub_6F7C9220(v6, *(_DWORD *)(a2 + 12), v4);
    v11 = v6 + v5;
    v8 = *(_DWORD *)(a1 + 8);
    if ( v8 && !v16 )
      v18 = sub_6F7C9220(v8, v17, v4);
    else
      v18 = *(_DWORD *)(a1 + 8);
    v9 = *(_DWORD *)(a1 + 12);
    if ( !v9 || v4 == v19 )
      v10 = *(_DWORD *)(a1 + 12);
    else
      v10 = sub_6F7C9220(v9, v19, v4);
    v13 = v18 + v10;
    if ( v8 != 0 && v4 != v20 )
      v8 = sub_6F7C9220(v8, v20, v4);
    if ( v9 != 0 && v4 != v21 )
      v9 = sub_6F7C9220(v9, v21, v4);
    *(_DWORD *)(a2 + 12) = v9 + v8;
    *(_DWORD *)a2 = v14;
    *(_DWORD *)(a2 + 4) = v11;
    result = v13;
    *(_DWORD *)(a2 + 8) = v13;
  }
  return result;
}
