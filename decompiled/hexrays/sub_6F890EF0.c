int __usercall sub_6F890EF0@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // ebp@1
  int v5; // ecx@1
  int v6; // edx@3
  int v7; // ebx@3
  unsigned __int16 v8; // si@3
  bool v9; // zf@4
  int v10; // esi@8
  unsigned __int8 v11; // cl@14
  int v12; // [sp+0h] [bp-28h]@1
  unsigned __int16 v13; // [sp+4h] [bp-24h]@8
  int v14; // [sp+4h] [bp-24h]@14
  unsigned __int16 *v15; // [sp+8h] [bp-20h]@2
  int v16; // [sp+Ch] [bp-1Ch]@8
  int v17; // [sp+10h] [bp-18h]@1
  int v18; // [sp+14h] [bp-14h]@14

  v3 = a2;
  v4 = a3 + 724;
  v5 = 2 * a3;
  v12 = *(_DWORD *)(result + 5200);
  v17 = *(_DWORD *)(result + 4 * v4 + 12);
  if ( v5 > *(_DWORD *)(result + 5200) )
  {
LABEL_11:
    *(_DWORD *)(result + 4 * v4 + 12) = v17;
    return result;
  }
  v15 = (unsigned __int16 *)(a2 + 4 * *(_DWORD *)(result + 4 * v4 + 12));
  while ( 1 )
  {
    if ( v5 >= v12 )
    {
      v6 = *(_DWORD *)(result + 4 * v5 + 2908);
      v7 = v5;
      v8 = *(_WORD *)(v3 + 4 * v6);
      goto LABEL_4;
    }
    v10 = *(_DWORD *)(result + 4 * v5 + 2908);
    v7 = v5 + 1;
    v6 = *(_DWORD *)(result + 4 * v5 + 2912);
    v16 = v10;
    v13 = *(_WORD *)(v3 + 4 * v10);
    v8 = *(_WORD *)(v3 + 4 * v6);
    if ( v8 < v13 )
      goto LABEL_4;
    if ( v8 == v13 )
    {
      v18 = v5 + 1;
      v14 = v5;
      v11 = *(_BYTE *)(result + v6 + 5208);
      if ( v11 > *(_BYTE *)(result + v16 + 5208) )
        v6 = v16;
      v7 = v18;
      if ( v11 > *(_BYTE *)(result + v16 + 5208) )
        v7 = v14;
LABEL_4:
      v9 = *v15 == v8;
      if ( *v15 < v8 )
        goto LABEL_11;
      goto LABEL_5;
    }
    v7 = v5;
    v6 = v16;
    v9 = *v15 == v13;
    if ( *v15 < v13 )
      goto LABEL_11;
LABEL_5:
    if ( v9 && *(_BYTE *)(result + v17 + 5208) <= *(_BYTE *)(result + v6 + 5208) )
      break;
    v5 = 2 * v7;
    *(_DWORD *)(result + 4 * v4 + 12) = v6;
    v4 = v7 + 724;
    if ( 2 * v7 > v12 )
      goto LABEL_11;
  }
  *(_DWORD *)(result + 4 * v4 + 12) = v17;
  return result;
}
