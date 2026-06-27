int sub_6F96A490()
{
  _DWORD *v0; // eax@2
  char v2; // [sp+1Ch] [bp-40h]@1
  int v3; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v4)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v5; // [sp+38h] [bp-24h]@1

  v4 = sub_6F962A50;
  v5 = &dword_6F96A97C;
  sub_6F8A1A60((int *)&v2);
  v3 = 0;
  if ( sub_6F8B3270((volatile signed __int32 *)dword_6FB49928) )
  {
    v0 = (_DWORD *)sub_6F961D10(4);
    *v0 = off_6FBAF62C;
    sub_6F9628A0((int)v0, (int)&off_6FBABF4C, (int)sub_6F8BAC90);
  }
  return sub_6F8A1AD0((int *)&v2);
}
