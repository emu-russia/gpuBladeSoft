signed int __thiscall sub_6F938500(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // edi@1
  int v4; // ebx@1
  int v5; // edx@1
  int v6; // esi@1
  signed int result; // eax@3
  void (*v8)(); // eax@5
  bool v9; // zf@5
  int (__thiscall *v10)(void *); // edx@8
  int v11; // ecx@11
  signed int v12; // ST1C_4@12

  v3 = this;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v6 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 4) = v4;
  *(_DWORD *)(v4 + 8) = v5;
  if ( v6 )
  {
    _InterlockedSub((volatile signed __int32 *)(v6 + 4), 1u);
    if ( !v6 )
    {
      v8 = *(void (**)())(v0 + 8);
      v9 = v8 == nullsub_15;
      if ( v8 != nullsub_15 )
        ((void (__thiscall *)(_DWORD))v8)(0);
      _InterlockedSub((volatile signed __int32 *)8, 1u);
      if ( v9 )
      {
        v10 = *(int (__thiscall **)(void *))(v0 + 12);
        if ( v10 == sub_6F92F7F0 )
          (*(void (__thiscall **)(int))(v0 + 4))(v6);
        else
          v10((void *)v6);
      }
    }
  }
  result = sub_6F8B54C0(v3, 0, (int)sub_6F9632F0, v4);
  if ( result )
  {
    v11 = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    if ( v11 )
    {
      v12 = result;
      sub_6F92F800(v11 == 0, v11);
      result = v12;
    }
    sub_6F95B380(result);
  }
  return result;
}
