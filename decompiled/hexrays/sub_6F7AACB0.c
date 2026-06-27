signed int __usercall sub_6F7AACB0@<eax>(int a1@<eax>, _DWORD *a2@<edx>, _DWORD *a3@<ecx>, int a4, _WORD *a5)
{
  int v5; // ebx@1
  unsigned __int16 v6; // di@1
  unsigned __int16 v7; // si@2
  int v9; // edi@7
  _DWORD *v10; // ST3C_4@7
  _DWORD *v11; // ST38_4@7
  signed int v12; // ebx@7
  __int16 v13; // [sp+18h] [bp-44h]@2
  __int16 v14; // [sp+1Ah] [bp-42h]@2
  int v15; // [sp+1Ch] [bp-40h]@2
  int v16; // [sp+20h] [bp-3Ch]@2
  int v17; // [sp+24h] [bp-38h]@2
  int v18; // [sp+28h] [bp-34h]@2
  int v19; // [sp+2Ch] [bp-30h]@2
  int v20; // [sp+30h] [bp-2Ch]@2
  __int16 v21; // [sp+34h] [bp-28h]@2
  __int16 v22; // [sp+36h] [bp-26h]@2

  v5 = *(_WORD *)(a1 + 286);
  v6 = *(_WORD *)(a1 + 288);
  if ( !(*(_BYTE *)(a1 + 368) & 1) )
  {
    v15 = *(_DWORD *)(a1 + 72);
    v14 = *(_WORD *)(a1 + 76);
    v13 = *(_WORD *)(a1 + 78);
    v7 = *(_WORD *)(a1 + 80);
    v21 = *(_WORD *)(a1 + 82);
    v16 = *(_DWORD *)(a1 + 84);
    v17 = *(_DWORD *)(a1 + 88);
    v18 = *(_DWORD *)(a1 + 92);
    v19 = *(_DWORD *)(a1 + 96);
    v20 = *(_DWORD *)(a1 + 100);
    v22 = *(_WORD *)(a1 + 104);
    v5 = v6;
    if ( v6 >= v7 )
      goto LABEL_3;
LABEL_7:
    v9 = a1;
    v10 = a3;
    v11 = a2;
    *(_WORD *)(a4 + 8) = v7;
    *(_DWORD *)a4 = v15;
    *(_DWORD *)(a4 + 20) = v18;
    *(_DWORD *)(a4 + 12) = v16;
    *(_WORD *)(a4 + 4) = v14;
    *(_DWORD *)(a4 + 24) = v19;
    *(_WORD *)(a4 + 6) = v13;
    *(_DWORD *)(a4 + 28) = v20;
    *(_WORD *)(a4 + 10) = v21;
    *(_WORD *)(a4 + 32) = v22;
    *(_DWORD *)(a4 + 16) = v17;
    *a5 = v5;
    v12 = (*(int (__cdecl **)(int, int, int))(v9 + 572))(
            v9,
            *(_DWORD *)(8 * v5 + v17) - *(_DWORD *)(v16 + 8 * v5),
            *(_DWORD *)(8 * v5 + v17 + 4) - *(_DWORD *)(v16 + 8 * v5 + 4));
    *v11 = sub_6F7C9420(v12, *(_WORD *)(v9 + 298), *(_DWORD *)(v9 + 564));
    *v10 = sub_6F7C9420(v12, *(_WORD *)(v9 + 300), *(_DWORD *)(v9 + 564));
    return 0;
  }
  v15 = *(_DWORD *)(a1 + 36);
  v14 = *(_WORD *)(a1 + 40);
  v13 = *(_WORD *)(a1 + 42);
  v7 = *(_WORD *)(a1 + 44);
  v21 = *(_WORD *)(a1 + 46);
  v16 = *(_DWORD *)(a1 + 48);
  v17 = *(_DWORD *)(a1 + 52);
  v18 = *(_DWORD *)(a1 + 56);
  v19 = *(_DWORD *)(a1 + 60);
  v20 = *(_DWORD *)(a1 + 64);
  v22 = *(_WORD *)(a1 + 68);
  if ( (unsigned __int16)v5 < v7 )
    goto LABEL_7;
LABEL_3:
  if ( *(_BYTE *)(a1 + 561) )
    *(_DWORD *)(a1 + 12) = 134;
  *a5 = 0;
  return 1;
}
