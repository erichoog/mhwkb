(function () {

    // Angular SearchBoxApp Definition
    var angularJSONApp = angular.module('angularJSONApp', []);

    // Code to run when Angular App is started.
    angularJSONApp.run(function() {
        console.log('AngularJSONApp has started successfully.')
    });

    angularJSONApp.controller('InitializeCtrl', [InitializeCtrl]);

    function InitializeCtrl() {
        angular.element(document).ready(function(){
            alert('loaded!')
        });
    }

})();
