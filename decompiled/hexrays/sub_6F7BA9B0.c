int __usercall sub_6F7BA9B0@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  int v2; // ebx@1
  _DWORD *v3; // esi@1
  int v4; // eax@1
  int result; // eax@1
  int v6; // eax@2
  int v7; // edx@2
  int v8; // ebp@2
  int v9; // eax@2
  int v10; // edx@3
  int v11; // edi@3
  int v12; // eax@3
  int v13; // edx@11
  int v14; // eax@11
  int v15; // eax@13
  signed int v16; // eax@17
  signed int v17; // eax@17
  signed int v18; // eax@17
  int v19; // [sp+3Ch] [bp-620h]@1
  int v20; // [sp+4Ch] [bp-610h]@4
  int v21; // [sp+50h] [bp-60Ch]@11
  int v22; // [sp+54h] [bp-608h]@17
  int v23; // [sp+58h] [bp-604h]@17
  int v24; // [sp+5Ch] [bp-600h]@17
  int v25; // [sp+60h] [bp-5FCh]@17
  char v26; // [sp+64h] [bp-5F8h]@1
  int v27; // [sp+68h] [bp-5F4h]@3
  int v28; // [sp+84h] [bp-5D8h]@17
  int v29; // [sp+8Ch] [bp-5D0h]@6
  int v30; // [sp+90h] [bp-5CCh]@17
  char v31; // [sp+A8h] [bp-5B4h]@2
  char v32; // [sp+AAh] [bp-5B2h]@2
  int v33; // [sp+5B8h] [bp-A4h]@2
  int v34; // [sp+5BCh] [bp-A0h]@2
  int v35; // [sp+5C0h] [bp-9Ch]@2
  int v36; // [sp+5C4h] [bp-98h]@3
  int v37; // [sp+5C8h] [bp-94h]@3
  int v38; // [sp+5CCh] [bp-90h]@3
  int v39; // [sp+5D0h] [bp-8Ch]@3
  int v40; // [sp+5D4h] [bp-88h]@3
  int v41; // [sp+5D8h] [bp-84h]@3
  int (__cdecl *v42)(char *, int, int); // [sp+630h] [bp-2Ch]@11
  int v43; // [sp+634h] [bp-28h]@2
  int v44; // [sp+638h] [bp-24h]@2

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 488);
  *a2 = 0;
  v19 = v4;
  result = (**(int (__cdecl ***)(char *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int (__cdecl *)(int, int)))(v4 + 12))(
             &v26,
             v2,
             0,
             0,
             *(_DWORD *)(v2 + 420),
             *(_DWORD *)(v2 + 528),
             0,
             0,
             sub_6F7BB280);
  if ( !result )
  {
    v6 = *(_DWORD *)(v2 + 404);
    v7 = *(_DWORD *)(v2 + 416);
    v8 = 0;
    v32 = 1;
    v31 = 0;
    v33 = v6;
    v34 = *(_DWORD *)(v2 + 408);
    v35 = *(_DWORD *)(v2 + 412);
    v43 = *(_DWORD *)(v2 + 544);
    v9 = *(_DWORD *)(v2 + 540);
    *v3 = 0;
    v44 = v9;
    if ( v7 > 0 )
    {
      do
      {
        v10 = *(_DWORD *)(v27 + 456);
        v11 = *(_DWORD *)(*(_DWORD *)(v27 + 128) + 48);
        v36 = *(_DWORD *)(v27 + 436);
        v37 = *(_DWORD *)(v27 + 440);
        v38 = *(_DWORD *)(v27 + 444);
        v39 = *(_DWORD *)(v27 + 448);
        v12 = *(_DWORD *)(v27 + 452);
        v41 = v10;
        v40 = v12;
        if ( v11 )
        {
          if ( (**(int (__cdecl ***)(_DWORD, int, int *))v11)(*(_DWORD *)(v11 + 4), v8, &v20) || v42(&v26, v20, v21) )
            goto LABEL_5;
          if ( !*(_DWORD *)(*(_DWORD *)v11 + 8) )
          {
LABEL_13:
            v15 = *(_DWORD *)(*(_DWORD *)(v27 + 128) + 48);
            if ( v15 )
              (*(void (__cdecl **)(_DWORD, int *))(*(_DWORD *)v15 + 4))(*(_DWORD *)(v15 + 4), &v20);
            goto LABEL_5;
          }
          LOWORD(v16) = sub_6F7C9390(v28);
          v23 = 0;
          v22 = v16 >> 16;
          LOWORD(v17) = sub_6F7C9390(v29);
          v24 = v17 >> 16;
          LOWORD(v18) = sub_6F7C9390(v30);
          v25 = v18 >> 16;
          v14 = (*(int (__cdecl **)(_DWORD, int, _DWORD, int *))(*(_DWORD *)v11 + 8))(*(_DWORD *)(v11 + 4), v8, 0, &v22);
          v28 = v22 << 16;
          v29 = v24 << 16;
          v30 = v25 << 16;
        }
        else
        {
          v13 = *(_DWORD *)(*(_DWORD *)(v27 + 428) + 4 * v8);
          v20 = *(_DWORD *)(*(_DWORD *)(v27 + 424) + 4 * v8);
          v21 = v13;
          v14 = v42(&v26, v20, v13);
        }
        if ( !v14 )
          goto LABEL_13;
LABEL_5:
        if ( !v8 || v29 > *v3 )
          *v3 = v29;
        ++v8;
      }
      while ( *(_DWORD *)(v2 + 416) > v8 );
    }
    (*(void (__cdecl **)(char *))(*(_DWORD *)(v19 + 12) + 4))(&v26);
    result = 0;
  }
  return result;
}
