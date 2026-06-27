int __thiscall sub_6F9150C0(int this, int a2)
{
  int v2; // ebx@1
  int result; // eax@2

  v2 = this;
  if ( (unsigned __int8)(*(int (**)(void))(**(_DWORD **)(this + 84) + 24))() )
    result = *(_DWORD *)(v2 + 8) - *(_DWORD *)(v2 + 12);
  else
    result = *(_DWORD *)(v2 + 88)
           + (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(**(_DWORD **)(v2 + 84) + 28))(
               a2,
               *(_DWORD *)(v2 + 88),
               *(_DWORD *)(v2 + 96),
               *(_DWORD *)(v2 + 8) - *(_DWORD *)(v2 + 4))
           - *(_DWORD *)(v2 + 100);
  return result;
}
