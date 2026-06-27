int __stdcall sub_6F8BF000(int a1)
{
  _DWORD *v2; // eax@2
  void *v3; // [sp+0h] [bp-68h]@1
  int v4; // [sp+4h] [bp-64h]@2
  void *v5; // [sp+1Ch] [bp-4Ch]@2
  int v6; // [sp+20h] [bp-48h]@1
  int *v7; // [sp+24h] [bp-44h]@1
  int v8; // [sp+28h] [bp-40h]@1
  char v9; // [sp+2Ch] [bp-3Ch]@1
  int v10; // [sp+30h] [bp-38h]@2
  int (__cdecl *v11)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-24h]@1
  int *v12; // [sp+48h] [bp-20h]@1
  char *v13; // [sp+4Ch] [bp-1Ch]@1
  int (*v14)(); // [sp+50h] [bp-18h]@1
  int *v15; // [sp+54h] [bp-14h]@1
  char v16; // [sp+60h] [bp-8h]@1

  v11 = sub_6F962A50;
  v13 = &v16;
  v12 = dword_6F96B15C;
  v14 = sub_6F8BF114;
  v15 = (int *)&v3;
  sub_6F8A1A60((int *)&v9);
  v6 = sub_6F8C3BF0(&unk_6FB49FDC);
  v7 = (int *)(*(_DWORD *)(*(_DWORD *)a1 + 12) + 4 * v6);
  v8 = *v7;
  if ( !v8 )
  {
    v10 = 3;
    v2 = sub_6F961B60(0xA8u);
    v2[1] = 0;
    *v2 = off_6FBB0810;
    v2[2] = 0;
    v2[3] = 0;
    *((_BYTE *)v2 + 16) = 0;
    v2[5] = 0;
    v2[6] = 0;
    v2[7] = 0;
    v2[8] = 0;
    v2[9] = 0;
    *((_BYTE *)v2 + 164) = 0;
    v10 = 1;
    v5 = v2;
    sub_6F92FFF0(v2, a1);
    v4 = v6;
    v3 = v5;
    v10 = -1;
    sub_6F936240(*(_DWORD **)a1, (int)v5, v6);
    v8 = *v7;
  }
  sub_6F8A1AD0((int *)&v9);
  return v8;
}
