int __thiscall sub_6F916EB0(_DWORD *this)
{
  _DWORD *v1; // eax@1
  _DWORD *v2; // eax@1
  int v3; // ecx@1
  _DWORD *v4; // eax@1
  int v5; // edx@1
  int v7; // [sp+0h] [bp-6Ch]@1
  _DWORD *v8; // [sp+1Ch] [bp-50h]@1
  _DWORD *v9; // [sp+20h] [bp-4Ch]@1
  int v10; // [sp+24h] [bp-48h]@1
  char v11; // [sp+2Ch] [bp-40h]@1
  int v12; // [sp+30h] [bp-3Ch]@2
  int (__cdecl *v13)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-28h]@1
  int *v14; // [sp+48h] [bp-24h]@1
  char *v15; // [sp+4Ch] [bp-20h]@1
  int (__cdecl *v16)(int, int, int, int, int, int, int, int, int, int, int, int, int); // [sp+50h] [bp-1Ch]@1
  int *v17; // [sp+54h] [bp-18h]@1
  char v18; // [sp+60h] [bp-Ch]@1

  v8 = this;
  v15 = &v18;
  v13 = sub_6F962A50;
  v14 = &dword_6F96BC68;
  v16 = sub_6F916FFD;
  v17 = &v7;
  sub_6F8A1A60((int *)&v11);
  v1 = v8;
  *v8 = off_6FBB0674;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v9 = v1 + 7;
  sub_6F938250(v1 + 7);
  v2 = v8;
  *v8 = off_6FBB0398;
  v3 = (int)(v2 + 9);
  v2 += 8;
  *v2 = 0;
  v10 = v3;
  sub_6F90E890(v3, (int)v2);
  v4 = v8;
  v5 = (int)v9;
  v8[11] = 0;
  v4[12] = 0;
  v4[13] = 0;
  v4[14] = 0;
  v4[15] = 0;
  v4[16] = 512;
  v4[17] = 0;
  v4[18] = 0;
  v4[19] = 0;
  *((_BYTE *)v4 + 80) = 0;
  v4[21] = 0;
  v4[22] = 0;
  v4[23] = 0;
  v4[24] = 0;
  v4[25] = 0;
  if ( sub_6F95CD80(v5) )
  {
    v12 = 1;
    v8[21] = sub_6F95DCD0((int)v9);
  }
  return sub_6F8A1AD0((int *)&v11);
}
