int __cdecl sub_6F911A10(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, _BYTE *a7, int a8)
{
  int v8; // eax@1
  void (__thiscall *v9)(int *, _DWORD *, int, int, int, int *); // eax@1
  void (__cdecl *v10)(int); // eax@1
  int v11; // ecx@3
  int v12; // eax@3
  int v13; // ecx@5
  int result; // eax@6
  _DWORD *v15; // [sp+14h] [bp-78h]@1
  int v16; // [sp+18h] [bp-74h]@1
  int v17; // [sp+1Ch] [bp-70h]@1
  int v18; // [sp+20h] [bp-6Ch]@1
  int *v19; // [sp+24h] [bp-68h]@1
  char v20; // [sp+40h] [bp-4Ch]@1
  int v21; // [sp+44h] [bp-48h]@1
  int (__cdecl *v22)(int, int, __int64, void (**)(void), int *); // [sp+58h] [bp-34h]@1
  int *v23; // [sp+5Ch] [bp-30h]@1
  char *v24; // [sp+60h] [bp-2Ch]@1
  int (*v25)(); // [sp+64h] [bp-28h]@1
  int *v26; // [sp+68h] [bp-24h]@1
  char v27; // [sp+7Ah] [bp-12h]@1
  char v28; // [sp+7Bh] [bp-11h]@4
  int v29; // [sp+7Ch] [bp-10h]@1
  int v30; // [sp+80h] [bp-Ch]@1
  char v31; // [sp+84h] [bp-8h]@1

  v26 = (int *)&v15;
  v24 = &v31;
  v22 = sub_6F962A50;
  v23 = dword_6F96C404;
  v25 = sub_6F911B41;
  sub_6F8A1A60((int *)&v20);
  v21 = -1;
  sub_6F909D80(&v29, a7, a8, (int)&v27);
  v8 = *a2;
  v19 = &v29;
  v18 = a6;
  v17 = a5;
  v16 = a4;
  v15 = a2;
  v9 = *(void (__thiscall **)(int *, _DWORD *, int, int, int, int *))(v8 + 12);
  v21 = 1;
  v9(&v30, a2, a4, a5, a6, &v29);
  v10 = *(void (__cdecl **)(int))(a3 + 24);
  if ( v10 )
  {
    v21 = 2;
    v10(a3);
  }
  v21 = 2;
  sub_6F909DF0((int *)a3, &v30);
  v11 = v30;
  v12 = *(_DWORD *)(v30 - 12);
  *(_DWORD *)(a3 + 24) = sub_6F911960;
  *(_DWORD *)(a3 + 4) = v12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v11 - 12), (int)&v28);
  v13 = v29;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_6F9086D0((void *)(v13 - 12), (int)&v30);
    result = sub_6F8A1AD0((int *)&v20);
  }
  else
  {
    result = sub_6F8A1AD0((int *)&v20);
  }
  return result;
}
