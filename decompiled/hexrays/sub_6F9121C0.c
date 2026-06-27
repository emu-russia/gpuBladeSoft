int __cdecl sub_6F9121C0(int a1, int *a2, _BYTE *a3, int a4, int a5)
{
  int v5; // eax@1
  int (__thiscall *v6)(int *, int *, int); // eax@1
  int v7; // ecx@1
  int result; // eax@2
  int *v9; // [sp+8h] [bp-68h]@1
  int v10; // [sp+Ch] [bp-64h]@1
  int v11; // [sp+20h] [bp-50h]@1
  char v12; // [sp+24h] [bp-4Ch]@1
  int v13; // [sp+28h] [bp-48h]@1
  int (__cdecl *v14)(int, int, __int64, void (**)(void), int *); // [sp+3Ch] [bp-34h]@1
  __int16 *v15; // [sp+40h] [bp-30h]@1
  char *v16; // [sp+44h] [bp-2Ch]@1
  int (*v17)(); // [sp+48h] [bp-28h]@1
  int *v18; // [sp+4Ch] [bp-24h]@1
  char v19; // [sp+63h] [bp-Dh]@1
  int v20; // [sp+64h] [bp-Ch]@1
  char v21; // [sp+68h] [bp-8h]@1

  v18 = (int *)&v9;
  v16 = &v21;
  v14 = sub_6F962A50;
  v15 = &word_6F96C3FE;
  v17 = sub_6F912281;
  sub_6F8A1A60((int *)&v12);
  v13 = -1;
  sub_6F909D80(&v20, a3, a4, (int)&v19);
  v5 = *a2;
  v10 = a5;
  v9 = &v20;
  v6 = *(int (__thiscall **)(int *, int *, int))(v5 + 8);
  v13 = 1;
  v11 = v6(a2, &v20, a5);
  v7 = v20;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_6F9086D0((void *)(v7 - 12), (int)&v19);
    sub_6F8A1AD0((int *)&v12);
    result = v11;
  }
  else
  {
    sub_6F8A1AD0((int *)&v12);
    result = v11;
  }
  return result;
}
