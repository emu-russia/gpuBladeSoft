int __cdecl sub_6F9632F0(int a1)
{
  int v1; // eax@1
  void (*v2)(void); // eax@1
  bool v3; // zf@1
  void (*v5)(); // eax@4
  bool v6; // zf@4
  int (__thiscall *v7)(void *); // edx@7
  int v8; // [sp+0h] [bp-5Ch]@1
  int v9; // [sp+14h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-40h]@1
  int v11; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v12)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  __int16 *v13; // [sp+38h] [bp-24h]@1
  char *v14; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v15)(int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v16; // [sp+44h] [bp-18h]@1
  char v17; // [sp+50h] [bp-Ch]@1

  v12 = sub_6F962A50;
  v14 = &v17;
  v13 = &word_6F96B672;
  v15 = sub_6F9633B8;
  v16 = &v8;
  sub_6F8A1A60((int *)&v10);
  *(_DWORD *)(a1 + 4) = 0;
  v1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  v9 = v1;
  v2 = *(void (**)(void))(*(_DWORD *)a1 + 8);
  v11 = 1;
  v2();
  v3 = v9 == 0;
  if ( v9 )
  {
    _InterlockedSub((volatile signed __int32 *)(v9 + 4), 1u);
    if ( v3 )
    {
      v5 = *(void (**)())(*(_DWORD *)v9 + 8);
      v6 = v5 == nullsub_15;
      if ( v5 != nullsub_15 )
        ((void (__thiscall *)(int))v5)(v9);
      _InterlockedSub((volatile signed __int32 *)(v9 + 8), 1u);
      if ( v6 )
      {
        v7 = *(int (__thiscall **)(void *))(*(_DWORD *)v9 + 12);
        if ( v7 == sub_6F92F7F0 )
          (*(void (**)(void))(*(_DWORD *)v9 + 4))();
        else
          v7((void *)v9);
      }
    }
  }
  sub_6F8A1AD0((int *)&v10);
  return 0;
}
