int __thiscall sub_6F8B9150(volatile signed __int32 **this)
{
  volatile signed __int32 *v1; // eax@1
  _DWORD *v3; // eax@3
  int v4; // [sp+0h] [bp-5Ch]@1
  volatile signed __int32 **v5; // [sp+18h] [bp-44h]@1
  char v6; // [sp+1Ch] [bp-40h]@1
  int v7; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v8)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v9; // [sp+38h] [bp-24h]@1
  char *v10; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v11)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v12; // [sp+44h] [bp-18h]@1
  char v13; // [sp+50h] [bp-Ch]@1

  v5 = this;
  v10 = &v13;
  v8 = sub_6F962A50;
  v9 = dword_6F96AA78;
  v11 = sub_6F8B91DD;
  v12 = &v4;
  sub_6F8A1A60((int *)&v6);
  v1 = *v5;
  v7 = 1;
  if ( sub_6F8B3270(v1) )
  {
    v3 = (_DWORD *)sub_6F961D10(4);
    *v3 = off_6FBAF62C;
    sub_6F9628A0((int)v3, (int)&off_6FBABF4C, (int)sub_6F8BAC90);
  }
  return sub_6F8A1AD0((int *)&v6);
}
