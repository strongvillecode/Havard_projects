from django.urls import path
from . import views

urlpatterns = [
    path('hello/', views.members, name='hello'),
]