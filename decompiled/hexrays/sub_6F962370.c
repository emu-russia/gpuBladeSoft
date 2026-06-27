int __cdecl sub_6F962370(int a1)
{
  _DWORD *v2; // eax@5
  int v3; // [sp+0h] [bp-5Ch]@1
  char v4; // [sp+1Ch] [bp-40h]@1
  int v5; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v6)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v7; // [sp+38h] [bp-24h]@1
  char *v8; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v9)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v10; // [sp+44h] [bp-18h]@1
  char v11; // [sp+50h] [bp-Ch]@1

  v6 = sub_6F962A50;
  v8 = &v11;
  v7 = dword_6F96A988;
  v9 = sub_6F962468;
  v10 = &v3;
  sub_6F8A1A60((int *)&v4);
  v5 = 1;
  sub_6F8B4530((int *)&unk_6FB4A508, (void (*)(void))sub_6F8B90E0);
  if ( sub_6F8B2F50((volatile signed __int32 *)dword_6FB49928) )
    sub_6F8BB040();
  *(_BYTE *)(a1 + 1) = 0;
  v5 = 2;
  sub_6F8B4530((int *)&unk_6FB4A500, (void (*)(void))sub_6F8B90C0);
  if ( sub_6F8B27F0((int *)dword_6FB49924) )
    sub_6F8BB070();
  v5 = 0;
  if ( sub_6F8B3270((volatile signed __int32 *)dword_6FB49928) )
  {
    v2 = (_DWORD *)sub_6F961D10(4);
    *v2 = off_6FBAF62C;
    sub_6F9628A0((int)v2, (int)&off_6FBABF4C, (int)sub_6F8BAC90);
  }
  return sub_6F8A1AD0((int *)&v4);
}
