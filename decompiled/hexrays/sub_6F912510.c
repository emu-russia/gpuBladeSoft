int __cdecl sub_6F912510(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  void (__thiscall *v6)(int *, _DWORD *, int, int); // eax@1
  void (__cdecl *v7)(int); // eax@1
  int v8; // ecx@3
  int v9; // eax@3
  int result; // eax@4
  _DWORD *v11; // [sp+Ch] [bp-68h]@1
  int v12; // [sp+10h] [bp-64h]@1
  int v13; // [sp+14h] [bp-60h]@1
  char v14; // [sp+28h] [bp-4Ch]@1
  int v15; // [sp+2Ch] [bp-48h]@1
  int (__cdecl *v16)(int, int, __int64, void (**)(void), int *); // [sp+40h] [bp-34h]@1
  int *v17; // [sp+44h] [bp-30h]@1
  char *v18; // [sp+48h] [bp-2Ch]@1
  int (*v19)(); // [sp+4Ch] [bp-28h]@1
  int *v20; // [sp+50h] [bp-24h]@1
  char v21; // [sp+67h] [bp-Dh]@5
  int v22; // [sp+68h] [bp-Ch]@1
  char v23; // [sp+6Ch] [bp-8h]@1

  v20 = (int *)&v11;
  v18 = &v23;
  v16 = sub_6F962A50;
  v17 = &dword_6F96C3BC;
  v19 = sub_6F9125EE;
  sub_6F8A1A60((int *)&v14);
  v5 = *a2;
  v13 = a5;
  v12 = a4;
  v11 = a2;
  v6 = *(void (__thiscall **)(int *, _DWORD *, int, int))(v5 + 12);
  v15 = -1;
  v6(&v22, a2, a4, a5);
  v7 = *(void (__cdecl **)(int))(a3 + 24);
  if ( v7 )
  {
    v15 = 1;
    v7(a3);
  }
  v15 = 1;
  sub_6F909DF0((int *)a3, &v22);
  v8 = v22;
  v9 = *(_DWORD *)(v22 - 12);
  *(_DWORD *)(a3 + 24) = sub_6F911960;
  *(_DWORD *)(a3 + 4) = v9;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_6F9086D0((void *)(v8 - 12), (int)&v21);
    result = sub_6F8A1AD0((int *)&v14);
  }
  else
  {
    result = sub_6F8A1AD0((int *)&v14);
  }
  return result;
}
