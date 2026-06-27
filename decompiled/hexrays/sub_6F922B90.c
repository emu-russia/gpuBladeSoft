int __thiscall sub_6F922B90(_DWORD **this)
{
  _DWORD **v1; // edi@1
  int v2; // ebx@2
  int v3; // ecx@3
  int (*v4)(void); // eax@4
  int v6; // ecx@5
  char v7; // [sp+1Ch] [bp-40h]@1
  int v8; // [sp+20h] [bp-3Ch]@4
  int (__cdecl *v9)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v10; // [sp+38h] [bp-24h]@1

  v1 = this;
  v9 = sub_6F962A50;
  v10 = &dword_6F96BAF8;
  sub_6F8A1A60((int *)&v7);
  if ( *((_BYTE *)v1[1] + *(_DWORD *)(*v1[1] - 12) + 13) & 0x20 )
  {
    v2 = (int)v1[1] + *(_DWORD *)(*v1[1] - 12);
    if ( !sub_6F95AC80() )
    {
      v3 = *(_DWORD *)(v2 + 120);
      if ( v3 )
      {
        v4 = *(int (**)(void))(*(_DWORD *)v3 + 24);
        v8 = 0;
        if ( v4() == -1 )
        {
          v6 = (int)v1[1] + *(_DWORD *)(*v1[1] - 12);
          sub_6F958B40(v6, *(_DWORD *)(v6 + 20) | 1);
        }
      }
    }
  }
  return sub_6F8A1AD0((int *)&v7);
}
