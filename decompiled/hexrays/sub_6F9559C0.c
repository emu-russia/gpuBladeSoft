int sub_6F9559C0()
{
  int v1; // [sp+0h] [bp-6Ch]@1
  int *v2; // [sp+18h] [bp-54h]@1
  char v3; // [sp+1Ch] [bp-50h]@1
  int v4; // [sp+20h] [bp-4Ch]@2
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v6; // [sp+38h] [bp-34h]@1
  char *v7; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v8)(int, int, int, int, int, int, char, int, int); // [sp+40h] [bp-2Ch]@1
  int *v9; // [sp+44h] [bp-28h]@1
  char v10; // [sp+50h] [bp-1Ch]@1

  v5 = sub_6F962A50;
  v7 = &v10;
  v2 = (int *)&v3;
  v6 = dword_6F96AA60;
  v8 = sub_6F955A67;
  v9 = &v1;
  sub_6F8A1A60((int *)&v3);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&dword_6FB49FC8, 0xFFFFFFFF) == 2 )
  {
    v4 = 1;
    sub_6F9057A0((char *)&dword_6FB4A1E0);
    sub_6F9057A0((char *)&dword_6FB4A0A0);
    sub_6F9057A0((char *)&dword_6FB4A140);
    sub_6F922270((char *)&dword_6FB4A460);
    sub_6F922270((char *)&dword_6FB4A320);
    sub_6F922270((char *)&dword_6FB4A3C0);
  }
  return sub_6F8A1AD0(v2);
}
