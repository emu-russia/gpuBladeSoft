int __cdecl sub_6F9624B0(int a1)
{
  char v1; // al@1
  _DWORD *v3; // eax@9
  _DWORD *v4; // eax@12
  int v5; // [sp+0h] [bp-5Ch]@1
  int *v6; // [sp+14h] [bp-48h]@6
  int v7; // [sp+18h] [bp-44h]@1
  char v8; // [sp+1Ch] [bp-40h]@1
  int v9; // [sp+20h] [bp-3Ch]@3
  int (__cdecl *v10)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v11; // [sp+38h] [bp-24h]@1
  char *v12; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v13)(int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v14; // [sp+44h] [bp-18h]@1
  char v15; // [sp+50h] [bp-Ch]@1

  v10 = sub_6F962A50;
  v12 = &v15;
  v11 = dword_6F96A980;
  v13 = sub_6F962641;
  v14 = &v5;
  sub_6F8A1A60((int *)&v8);
  v1 = *(_BYTE *)a1;
  v7 = 0;
  if ( !v1 )
  {
    v9 = -1;
    sub_6F8B4530((int *)&unk_6FB4A508, (void (*)(void))sub_6F8B90E0);
    v7 = sub_6F8B2F50((volatile signed __int32 *)dword_6FB49928);
    if ( v7 )
      sub_6F8BB040();
    while ( !*(_BYTE *)a1 )
    {
      if ( !*(_BYTE *)(a1 + 1) )
      {
        v7 = 1;
        *(_BYTE *)(a1 + 1) = 1;
        break;
      }
      v9 = 1;
      sub_6F8B4530((int *)&unk_6FB4A500, (void (*)(void))sub_6F8B90C0);
      v6 = (int *)dword_6FB49924;
      sub_6F8B4530((int *)&unk_6FB4A508, (void (*)(void))sub_6F8B90E0);
      if ( sub_6F8B2910(v6, dword_6FB49928) )
      {
        v4 = (_DWORD *)sub_6F961D10(4);
        *v4 = off_6FBAF618;
        sub_6F9628A0((int)v4, (int)&off_6FBABF40, (int)sub_6F8BAC50);
      }
    }
    v9 = 0;
    if ( sub_6F8B3270((volatile signed __int32 *)dword_6FB49928) )
    {
      v3 = (_DWORD *)sub_6F961D10(4);
      *v3 = off_6FBAF62C;
      sub_6F9628A0((int)v3, (int)&off_6FBABF4C, (int)sub_6F8BAC90);
    }
  }
  sub_6F8A1AD0((int *)&v8);
  return v7;
}
