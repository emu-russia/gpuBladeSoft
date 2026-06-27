int __cdecl sub_6F7BAF70(int a1, int a2, int a3, char a4, void *a5)
{
  int result; // eax@4
  int v6; // eax@7
  char *v7; // esi@8
  int v8; // ebx@8
  int v9; // edi@12
  int v10; // edx@12
  int v11; // ecx@12
  int v12; // edx@13
  int v13; // eax@13
  int v14; // eax@15
  signed int v15; // eax@17
  signed int v16; // eax@20
  signed int v17; // eax@20
  signed int v18; // eax@20
  int v19; // [sp+3Ch] [bp-620h]@8
  int v20; // [sp+4Ch] [bp-610h]@9
  int v21; // [sp+50h] [bp-60Ch]@13
  int v22; // [sp+54h] [bp-608h]@20
  int v23; // [sp+58h] [bp-604h]@20
  int v24; // [sp+5Ch] [bp-600h]@20
  int v25; // [sp+60h] [bp-5FCh]@20
  char v26; // [sp+64h] [bp-5F8h]@6
  int v27; // [sp+68h] [bp-5F4h]@12
  int v28; // [sp+84h] [bp-5D8h]@20
  int v29; // [sp+8Ch] [bp-5D0h]@17
  int v30; // [sp+90h] [bp-5CCh]@20
  char v31; // [sp+A8h] [bp-5B4h]@7
  char v32; // [sp+AAh] [bp-5B2h]@7
  int v33; // [sp+5B8h] [bp-A4h]@7
  int v34; // [sp+5BCh] [bp-A0h]@7
  int v35; // [sp+5C0h] [bp-9Ch]@7
  int v36; // [sp+5C4h] [bp-98h]@12
  int v37; // [sp+5C8h] [bp-94h]@12
  int v38; // [sp+5CCh] [bp-90h]@12
  int v39; // [sp+5D0h] [bp-8Ch]@12
  int v40; // [sp+5D4h] [bp-88h]@12
  int v41; // [sp+5D8h] [bp-84h]@12
  int (__cdecl *v42)(char *, int, int); // [sp+630h] [bp-2Ch]@13
  int v43; // [sp+634h] [bp-28h]@7
  int v44; // [sp+638h] [bp-24h]@7

  if ( a4 & 0x10 )
  {
    if ( a3 )
      memset(a5, 0, 4 * a3);
    return 0;
  }
  result = (**(int (__cdecl ***)(char *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int (__cdecl *)(int, int)))(*(_DWORD *)(a1 + 488) + 12))(
             &v26,
             a1,
             0,
             0,
             *(_DWORD *)(a1 + 420),
             *(_DWORD *)(a1 + 528),
             0,
             0,
             sub_6F7BB280);
  if ( !result )
  {
    v6 = *(_DWORD *)(a1 + 404);
    v32 = 1;
    v31 = 0;
    v33 = v6;
    v34 = *(_DWORD *)(a1 + 408);
    v35 = *(_DWORD *)(a1 + 412);
    v43 = *(_DWORD *)(a1 + 544);
    v44 = *(_DWORD *)(a1 + 540);
    if ( !a3 )
      return 0;
    v7 = (char *)a5;
    v8 = a2;
    v19 = 4 * a2 - (_DWORD)a5;
    while ( 1 )
    {
      v9 = *(_DWORD *)(*(_DWORD *)(v27 + 128) + 48);
      v36 = *(_DWORD *)(v27 + 436);
      v10 = *(_DWORD *)(v27 + 452);
      v37 = *(_DWORD *)(v27 + 440);
      v38 = *(_DWORD *)(v27 + 444);
      v39 = *(_DWORD *)(v27 + 448);
      v11 = *(_DWORD *)(v27 + 456);
      v40 = v10;
      v41 = v11;
      if ( v9 )
      {
        if ( (**(int (__cdecl ***)(_DWORD, int, int *))v9)(*(_DWORD *)(v9 + 4), v8, &v20) || v42(&v26, v20, v21) )
          goto LABEL_10;
        if ( !*(_DWORD *)(*(_DWORD *)v9 + 8) )
        {
LABEL_15:
          v14 = *(_DWORD *)(*(_DWORD *)(v27 + 128) + 48);
          if ( v14 )
            (*(void (__cdecl **)(_DWORD, int *))(*(_DWORD *)v14 + 4))(*(_DWORD *)(v14 + 4), &v20);
          LOWORD(v15) = sub_6F7C9390(v29);
          *(_DWORD *)v7 = v15 >> 16;
          goto LABEL_11;
        }
        LOWORD(v16) = sub_6F7C9390(v28);
        v23 = 0;
        v22 = v16 >> 16;
        LOWORD(v17) = sub_6F7C9390(v29);
        v24 = v17 >> 16;
        LOWORD(v18) = sub_6F7C9390(v30);
        v25 = v18 >> 16;
        v13 = (*(int (__cdecl **)(_DWORD, int, _DWORD, int *))(*(_DWORD *)v9 + 8))(*(_DWORD *)(v9 + 4), v8, 0, &v22);
        v28 = v22 << 16;
        v29 = v24 << 16;
        v30 = v25 << 16;
      }
      else
      {
        v12 = *(_DWORD *)(&v7[v19] + *(_DWORD *)(v27 + 424));
        v21 = *(_DWORD *)(&v7[v19] + *(_DWORD *)(v27 + 428));
        v20 = v12;
        v13 = v42(&v26, v12, v21);
      }
      if ( !v13 )
        goto LABEL_15;
LABEL_10:
      *(_DWORD *)v7 = 0;
LABEL_11:
      v7 += 4;
      if ( ++v8 == a2 + a3 )
        return 0;
    }
  }
  return result;
}
