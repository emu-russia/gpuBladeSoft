int __thiscall sub_6F938250(_DWORD *this)
{
  volatile signed __int32 *v1; // eax@1
  _DWORD *v3; // eax@6
  int v4; // [sp+0h] [bp-5Ch]@1
  _DWORD *v5; // [sp+14h] [bp-48h]@1
  volatile signed __int32 *v6; // [sp+18h] [bp-44h]@2
  char v7; // [sp+1Ch] [bp-40h]@1
  int v8; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v9)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v10; // [sp+38h] [bp-24h]@1
  char *v11; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v12)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v13; // [sp+44h] [bp-18h]@1
  char v14; // [sp+50h] [bp-Ch]@1

  v5 = this;
  v11 = &v14;
  v9 = sub_6F962A50;
  v10 = dword_6F96AB74;
  v12 = sub_6F938345;
  v13 = &v4;
  sub_6F8A1A60((int *)&v7);
  *v5 = 0;
  v8 = 1;
  sub_6F935510();
  v1 = (volatile signed __int32 *)dword_6FB49F5C;
  *v5 = dword_6FB49F5C;
  if ( v1 == (volatile signed __int32 *)dword_6FB49F48 )
  {
    _InterlockedAdd(v1, 1u);
  }
  else
  {
    v8 = 1;
    v6 = (volatile signed __int32 *)sub_6F8B8C20();
    if ( sub_6F8B2F50(v6) )
      sub_6F8BB040();
    _InterlockedAdd((volatile signed __int32 *)dword_6FB49F5C, 1u);
    *v5 = dword_6FB49F5C;
    v8 = 2;
    if ( sub_6F8B3270(v6) )
    {
      v3 = (_DWORD *)sub_6F961D10(4);
      *v3 = off_6FBAF62C;
      sub_6F9628A0((int)v3, (int)&off_6FBABF4C, (int)sub_6F8BAC90);
    }
  }
  return sub_6F8A1AD0((int *)&v7);
}
